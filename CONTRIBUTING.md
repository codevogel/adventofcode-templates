# Contributing

To contribute to this repository, please follow these steps:

1. **Fork the Repository**: Click on the "Fork" button at the top right corner of this page to create your own copy of the repository.
2. **Clone Your Fork**: Clone your forked repository to your local machine using the following command:
   ```bash
   git clone <your-fork-url>
   ```
3. **Create a New Branch**: Before making any changes, create a new branch for your feature or bug fix:
   ```bash
   git checkout -b <your-branch-name>
   ```
4. **Add templates**: Create a new directory named after the language you are adding templates for, and add your template files in that directory.

    - Minimum requirements for a template:
        - A `README.md` file that explains how to run the template.
        - An example `input.txt` file that the template can process:
            ```
            Here
            Be
            Input!
            ```
        - A minimal working script that processes the input and prints the output. It should:
            1. Read in the lines from `input.txt`, and add them to an array or list.
            2. Offer a place to parse/process this array of lines (Ideally, don't do any other parsing than trimming right now).
            3. Print the output of the resulting array to the console.
            4. Add some comments to explain what is happening, and give some idea of where the user can go from here.
        - Please do *not* include any additional logic that is beyond the scope of above requirements. It's cool to have a more complex parsing setup with reusable code, but this is not the place for it. Remember that this repository provides bare-bones minimal templates aimed to get students/new users started with writing some code. Refer to the [C# template](https://github.com/codevogel/adventofcode-templates/blob/main/c-sharp/Program.cs) for an example of a minimal working script.
5. **Commit Your Changes**: After making your changes, commit them with a descriptive message:
    ```bash
    git add .
    git commit -m "Add <description-of-your-changes>"
    ```
6. **Push Your Changes**: Push your changes to your forked repository:
    ```bash
    git push origin <your-branch-name>
    ```
7. **Create a Pull Request**: Go to the original repository and click on the "New Pull Request" button. Select your branch and submit the pull request with a clear description of your changes.

8. **Review and Address Feedback**: Once your pull request is submitted, the repository maintainers will review your changes. Be prepared to address any feedback or make additional changes as requested.

9. Pat yourself on the back for contributing. Keep being awesome!
