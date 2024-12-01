# How to Run

1. Install [Roswell, a Common Lisp environment manager](https://roswell.github.io/), or [SBCL, the leading open source Common Lisp implementation](https://www.sbcl.org/).

2. Navigate to the `common-lisp/` directory.

3. Start lisp with your file:

```bash
ros run --load program.lisp
```

or

```bash
sbcl --load program.lisp
```

4. Once lisp has started, run the main function:

```lisp
* (main)
Here
Be
Input!
```