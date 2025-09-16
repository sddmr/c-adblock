
# C AdBlocker (Terminal-Based)

A simple **C-based ad blocker** that checks URLs and blocks known advertising domains.  
This project demonstrates **C programming**, **string processing**, and **file handling** skills in a compact and educational terminal application.

---

## Features

- Loads blocked URLs from a `blocked_urls.txt` file.
- Checks user-entered URLs against the blocked list.
- Displays `[BLOCKED]` or `[ALLOWED]` in the terminal.
- Simple and lightweight terminal demo.
- Easily extendable: can integrate `libpcap` or real network traffic interception.

---

## Installation

1. Clone the repository:

```bash
git clone <repo-url>
cd c-adblocker
````

2. Build the project:

```bash
make
```

3. Run the program:

```bash
./c-adblocker
```

---

## Usage

Enter URLs in the terminal:

```
> https://www.doubleclick.net/ad
[BLOCKED] https://www.doubleclick.net/ad
> https://www.google.com
[ALLOWED] https://www.google.com
> q
```

* Type `q` to exit.
* Add more URLs to `blocked_urls.txt` to expand the block list.

---

## Future Improvements

* Integrate `libpcap` to capture real HTTP traffic.
* Add HTTPS support via SSL/TLS inspection (MITM).
* Create a GUI for a more interactive experience.
* Allow dynamic URL list updates and filtering options.

---


