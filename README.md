<a name="readme-top"></a>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/conu101/Get_next_line">
    <img src="images/noun-text-1822067.png" alt="Logo" width="200" height="200">
  </a>

  <h3 align="center">Get next line (GNL for friends)</h3>

  <p align="center">
    42 Helsinki second school project: coding a program reading a text file line by line.
    <br />
    <br />
    <br />
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

  <a href="https://github.com/conu101/Get_next_line">
    <img src="images/noun-c-file-896983.png" alt="Logo" width="80" height="80">
  </a>

In practice, data is often read line by line, so it is useful to create a function reading  a section of text that ends with a line break from a file descriptor. For example each command that we type in our shell or each line read from a flat file.

The main hurdles encountered during the Get_next_line projects were:
* buffer size and usage
* heap memory allocation and freeing
* return value different when a line has been read (1) vs. when reading of the file has been completed (0).

It is this project that solidified my understanding of memory allocation, in particular the use of the functions malloc() and free().


### Built With

* [![C][C.js]][C-url]
* [![VS-Code][VS-Code.js]][VSCode-url]



<!-- GETTING STARTED -->
## Getting Started

The project can be set up locally by downloading or cloning the repository. It has been built on and for macos so its functionality is not guaranteed on other operating systems.

The project required the use of the static library libft.a coded during the previous project. The libft version used in this projct is the version I had put together in that time, much more limited than the currently available version that has been updated since.
See libft project -> [https://github.com/conu101/libft](https://github.com/conu101/libft)

The executable "gnl" is available in this repo for direct use, but the project can also be recompiled following the steps presented next. If you use the available executable from this repo, ignore steps 4 to 7.

### Installation

1. Open a terminal on your machine

2. Clone the repo
   ```sh
   git clone https://github.com/conu101/Get_next_line.git <your_local_repository>
   ```
3. Get in your new repository
   ```sh
   cd <your_local_repository>
   ```
4. Copy the libft library into this repository and compile the libft library using the Makefile
   ```sh
   make -C libft/ fclean && make -C libft/
   ```
5. Check that the file libft.a was created and delete the object files
   ```sh
   make clean
   ```
6. Copy the file libft.a to <your_local_repository>

7. Compile the project giving the executable the name of your choice, for example "gnl"
	```sh
	gcc main.c get_next_line.c libft.a -o gnl
	```
8. Run the executabe with a text file as argument (for example testfile included)
	```sh
	./gnl testfile
	```
<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

With the main presented in this reposiory and the associated executable, running gnl with a text ile as argument will provide the following result in the shell


	1: first line
	1: second line (third line empty)
	0: 
	-1: (null)
	

For each line the integer is the return from the get_next_line program, followed by the line read and stored in buffer.

A wide range of usage can be imagined for this function. It will for example be used in the graphics projects RTv1 and RT, as a tool to read through parameter files for ray tracing 3D modeling of objects and surfaces.
-> [https://github.com/conu101/RTv1](https://github.com/conu101/RTv1)

<!-- CONTACT -->
## Contact

Constance Trouvé - firstname.name(at)gmail.com

Project Link: [https://github.com/conu101/Get_next_line](https://github.com/conu101/Get_next_line)




<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Illustrations obtained from "The Noun Project", credits:
* "Text" by Andrejs Kirma from <a href="https://thenounproject.com/browse/icons/term/text/" target="_blank" title="text Icons">Noun Project</a>
* "C File" by Hea Poh Lin from <a href="https://thenounproject.com/browse/icons/term/c-file/" target="_blank" title="C File Icons">Noun Project</a>

"C" and "VSCode" badges from <a href="https://img.shields.io" target="_blank" title="badges">img.shields.io</a>

README template by Othneil DREW from <a href=https://github.com/othneildrew/Best-README-Template target="_blank" title="git">Git_README_template</a>

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
[C.js]: https://img.shields.io/badge/C--programming-C-blue
[C-url]: https://www.w3schools.com/c/c_intro.php
[VS-Code.js]: https://img.shields.io/badge/Visual%20Studio%20Code-VSC-blue
[VSCode-url]: https://code.visualstudio.com/
