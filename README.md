# Yune

Yune is a framework for a Physically based Renderer based on the GPU using OpenCL. It is mainly aimed towards young programmers and researchers who are looking to write their own Ray tracers, Path tracers and implementing other advanced techniques and Physically based Reflection models, etc. It provides the basic funtionality to open up a window, display and save Images that are processed by the GPU. 

If you are familiar with [Nori](https://github.com/wjakob/nori), this gets easier. Yune is more like Nori on the GPU. As described earlier the host portion provides all the basic functionalities to open up a window and display the image. What happens to the Image depends on the Kernel which is upto the programmer that is **you**.

That being said as this is part of my and [@jabberwoky](https://github.com/jabberw0ky)'s bachelor thesis on Physically Based Rendering, we will be upgrading the GPU portion as well and keep adding new techniques as we study.

You can use this software in two ways.

1. Clone the project as it is, link it's dependencies manually and then start programming as if the whole project was coded by you. This may sound daunting but it actually pretty easy and recommended. Since there are only a handful of files and if you spend a little bit of time you can easily understand how most of the things are setup. Then you can proceed to add features such as acceleration data structures etc.

2. You build this project or use only the executable if provided in the Release. You can then only do OpenCL programming in a separate file and mention it's name when the application asks. You won't need to recompile the project at all. This means you can keep on changing the kernel file or even use many different files with different algorithms without compiling at all provided that the new algorithms don't need change in host (CPU side) logic :)

Yune uses OpenCL-GL interoperability as the main core for processing images on the kernel and displaying them on the window. Aside from that it uses 

* [GLFW](https://github.com/glfw/glfw), for window and input managment.
* [GLAD](https://github.com/Dav1dde/glad) for OpenGL 3.x and higher windows.
* [Eigen](https://github.com/eigenteam/eigen-git-mirror) for basic Vector types and math.
* [FreeImage](http://freeimage.sourceforge.net) for saving screenshots.
* [NanoGUI](https://github.com/wjakob/nanogui) for basic widgets.

Note that you don't need many of these dependencies as NanoGUI already has GLFW, GLAD, EIGEN in it. So in actuality all you need is NanoGUI and FreeImage. 

---
If you are still confused whether this is up for you here are a few points to clear your confusion.

>**I am not a programmer and I intend to use this to see pretty images.**

Nope, you are at the wrong place. 
<br/>

>**I am a programmer/researcher and I intend to implement some rendering technique.**

Yes, you are at the right place. You can either compile the whole project yourself (which is preferred) or just use the "exe" and just do programming in the kernel file. This will work as long as your new algorithms won't require changes in host logic. For example multi-pass algoithms may require enqueuing more than 1 kernel. We still haven't generalized it yet.
<br/>
<br/>

>**I am a programmer/researcher and I intend to modify Yune to make my own Renderer or something.**

Yes, you are at the right place. You don't need to build this project or whatsoever. Just clone it as it is, compile the dependencies and create a VS or Codeblocks project linking the right dependencies and start coding.

 ---
Right Now I haven't updated it to support build system like Cmake etc. If anybody still wants to compile it, I'll add some detailed steps soon.

Here is a picture obtained by Uni-directional Pathtracing with Next Event Estimation and using Modified Phong BRDF at 4000 spp.  

<img src="https://r0pikq.bn.files.1drv.com/y4mhWXu4VSbDT-gNofzyb9R4P_t8n56ygrisW0bLnhN2owntA6OlCE4H84AYsprxs03moM2zI4s_aIlOLyM--1jH10RPwUBbhMxbmqxqWOl63V1zOi4Le258LztUiBIa0AIRSskmfLFxWJzA6jw8L2zYsQoR2J_6aaDzBqUCRI1dW9bePXgrjliRY3WnbzL6YMcp2jjFFOgwYX3oVnoXglZgQ?cropmode=none"/>

### Added an alpha release. Check it out.




 
