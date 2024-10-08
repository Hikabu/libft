# Libft - Your Own C Library

## <h2>Introduction</h2>
<p>Libft is a project aimed at creating your own C library—a collection of useful functions that you'll be able to use in future C programming projects. The goal is to recreate standard C library functions and add additional ones that will come in handy throughout your coding journey.</p>

## <h2>Project Structure</h2>

<h3>Source Files (.c)</h3>
<p>All function implementations are placed here, with each function in its own file. Naming conventions should follow the pattern of the function name, for example:</p>

<ul>
  <li><code>ft_strlen.c</code></li>
  <li><code>ft_strdup.c</code></li>
  <li>etc.</li>
</ul>

<h3>Header File (<code>libft.h</code>)</h3>
<p>The header file contains declarations for all your functions. It should:</p>
<ul>
  <li>Include all necessary libraries (e.g., <code>#include &lt;unistd.h&gt;</code>, etc.)</li>
  <li>Declare all function prototypes</li>
  <li>Be included in every <code>.c</code> file using <code>#include "libft.h"</code></li>
</ul>

<h3>Makefile</h3>
<p>The Makefile is responsible for compiling the library. It should:</p>
<ul>
  <li>Compile all <code>.c</code> files into object files</li>
  <li>Create the static library <code>libft.a</code></li>
  <li>Include rules for <code>clean</code>, <code>fclean</code>, and <code>re</code></li>
</ul>

## <h2>Functions to Implement</h2>

<h3>Functions from <code>&lt;ctype.h&gt;</code></h3>
<ul>
  <li><code>ft_isalpha</code> - checks if the character is alphabetic</li>
  <li><code>ft_isdigit</code> - checks if the character is a digit (0 through 9)</li>
  <li><code>ft_isalnum</code> - checks if the character is alphanumeric</li>
  <li><code>ft_isascii</code> - checks if the character is part of the ASCII set</li>
  <li><code>ft_isprint</code> - checks if the character is printable</li>
  <li><code>ft_toupper</code> - converts the character to uppercase</li>
  <li><code>ft_tolower</code> - converts the character to lowercase</li>
</ul>

<h3>Functions from <code>&lt;string.h&gt;</code></h3>
<ul>
  <li><code>ft_memset</code> - fills memory with a constant byte</li>
  <li><code>ft_strlen</code> - calculates the length of a string</li>
  <li><code>ft_bzero</code> - zeroes out a byte string</li>
  <li><code>ft_memcpy</code> - copies memory from one area to another</li>
  <li><code>ft_memmove</code> - safely copies memory even if regions overlap</li>
  <li><code>ft_strlcpy</code> - copies a string up to a specified size</li>
  <li><code>ft_strlcat</code> - concatenates two strings up to a specified size</li>
  <li><code>ft_strchr</code> - locates a character in a string</li>
  <li><code>ft_strrchr</code> - locates a character in a string, searching from the end</li>
  <li><code>ft_strncmp</code> - compares two strings</li>
  <li><code>ft_memchr</code> - scans memory for a character</li>
  <li><code>ft_memcmp</code> - compares two memory areas</li>
  <li><code>ft_strnstr</code> - locates a substring within a string</li>
  <li><code>ft_strdup</code> - duplicates a string</li>
</ul>

<h3>Functions from <code>&lt;stdlib.h&gt;</code></h3>
<ul>
  <li><code>ft_atoi</code> - converts a string to an integer</li>
  <li><code>ft_calloc</code> - allocates memory and sets it to zero</li>
</ul>

<h3>Additional Functions</h3>
<ul>
  <li><code>ft_substr</code> - returns a substring from a string</li>
  <li><code>ft_strjoin</code> - concatenates two strings</li>
  <li><code>ft_strtrim</code> - trims specified characters from the beginning and end of a string</li>
  <li><code>ft_split</code> - splits a string using a character as a delimiter</li>
  <li><code>ft_itoa</code> - converts an integer to a string</li>
  <li><code>ft_strmapi</code> - applies a function to each character of a string</li>
  <li><code>ft_striteri</code> - applies a function to each character of a string using the index</li>
  <li><code>ft_putchar_fd</code> - outputs a character to the given file descriptor</li>
  <li><code>ft_putstr_fd</code> - outputs a string to the given file descriptor</li>
  <li><code>ft_putendl_fd</code> - outputs a string followed by a newline to the given file descriptor</li>
  <li><code>ft_putnbr_fd</code> - outputs a number to the given file descriptor</li>
</ul>

## <h2>Bonus Part: Linked List Functions</h2>
<p>If you've finished the mandatory part, you can implement a set of linked list functions:</p>

<ul>
  <li><code>ft_lstnew</code> - creates a new list element</li>
  <li><code>ft_lstadd_front</code> - adds an element at the beginning of the list</li>
  <li><code>ft_lstsize</code> - counts the number of elements in the list</li>
  <li><code>ft_lstlast</code> - returns the last element in the list</li>
  <li><code>ft_lstadd_back</code> - adds an element to the end of the list</li>
  <li><code>ft_lstclear</code> - deletes and frees the list</li>
  <li><code>ft_lstiter</code> - applies a function to each element of the list</li>
  <li><code>ft_lstmap</code> - applies a function to each element of the list, creating a new list</li>
</ul>

## <h2>Core Features</h2>

<h3>Memory Management Functions</h3>

<table>
  <thead>
    <tr>
      <th>Function</th>
      <th>Description</th>
      <th>Memory Usage</th>
      <th>Cycles (Typical)</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>ft_memset</code></td>
      <td>Fill memory with constant byte</td>
      <td>O(n)</td>
      <td>n + 3</td>
    </tr>
    <tr>
      <td><code>ft_bzero</code></td>
      <td>Zero out a byte string</td>
      <td>O(n)</td>
      <td>n + 2</td>
    </tr>
    <tr>
      <td><code>ft_memcpy</code></td>
      <td>Copy memory area</td>
      <td>O(n)</td>
      <td>n + 4</td>
    </tr>
    <tr>
      <td><code>ft_memmove</code></td>
      <td>Safe memory copy with overlap</td>
      <td>O(n)</td>
      <td>n + 6</td>
    </tr>
  </tbody>
</table>

## <h2>Conclusion</h2>
<p>Libft is the foundation for your future C projects. It equips you with a set of essential tools and is a key step in mastering C programming. Happy coding!</p>
