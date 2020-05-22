# Effective Journey - A *Github actions* project

Implement a `C++`  project with Github actions.

The configuration of the `.yml` file was done with the help of this github issue [comment](https://github.com/actions/starter-workflows/issues/209).

Another github discussion on the configuration process of a `C++` project can be found [here](https://github.com/actions/starter-workflows/issues/53#issuecomment-537847198).

There is another configuration pipeline (see `.additional_worflows/build_cmake.yml`) that creates building and testing phase on all three platforms (Windows, Linux and MacOS). It is also using `CMake` and `Ninja`. 

* more information about the build config can be found [here](https://github.com/gitschooldude/hello)

* The configuration file is very in-depth, giving automatic artifacts for each platform related build.

* The repository is based on the author's blog post, available [here](https://cristianadam.eu/20191222/using-github-actions-with-c-plus-plus-and-cmake/).

Other useful sources:
[^1] this and [^2] this.

[^1]: [manage workflows](https://help.github.com/en/actions/configuring-and-managing-workflows/configuring-a-workflow)
[^2]: [starter workflow](https://github.com/actions/starter-workflows/pull/47)

___

More information on setting up a github action is available on my personal page @ *Roam Research*.