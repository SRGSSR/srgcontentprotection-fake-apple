[![SRG Content Protection Fake logo](README-images/logo.png)](https://github.com/SRGSSR/srgcontentprotection-fake-apple)

[![GitHub releases](https://img.shields.io/github/v/release/SRGSSR/srgcontentprotection-fake-apple)](https://github.com/SRGSSR/srgcontentprotection-fake-apple/releases) [![platform](https://img.shields.io/badge/platfom-ios%20%7C%20tvos-blue)](https://github.com/SRGSSR/srgcontentprotection-fake-apple) [![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage) [![GitHub license](https://img.shields.io/github/license/SRGSSR/srgcontentprotection-fake-apple)](https://github.com/SRGSSR/srgcontentprotection-fake-apple/blob/master/LICENSE)

## About

The proprietary SRG Content Protection framework contains the sensitive logic required for protected media playback. In public builds (especially when frameworks are statically linked), it can be replaced by this fake framework whose sole purpose is to ensure binary compatibility with the framework it replaces.

## Compatibility

The library is suitable for applications running on iOS 9, tvOS 12 and above. The project is meant to be opened with the latest Xcode version.

## Contributing

If you want to contribute to the project, have a look at our [contributing guide](CONTRIBUTING.md).

## Installation

The library can be added to a project using [Carthage](https://github.com/Carthage/Carthage) by adding the following dependency to your `Cartfile`:
    
```
github "SRGSSR/srgcontentprotection-fake-apple"
```

For more information about Carthage and its use, refer to the [official documentation](https://github.com/Carthage/Carthage).

### Dependencies

The library requires the following frameworks to be added to any target requiring it:

* `libextobjc`: A utility framework.
* `MAKVONotificationCenter`: A safe KVO framework.
* `SRGContentProtection`: The (fake) content protection library framework.
* `SRGDiagnostics`: Framework for collecting diagnostic information.
* `SRGLogger`: The framework used for internal logging.
* `SRGNetwork`: A networking framework.

### Dynamic framework integration

1. Run `carthage update` to update the dependencies (which is equivalent to `carthage update --configuration Release`). 
2. Add the frameworks listed above and generated in the `Carthage/Build/(iOS|tvOS)` folder to your target _Embedded binaries_.

If your target is building an application, a few more steps are required:

1. Add a _Run script_ build phase to your target, with `/usr/local/bin/carthage copy-frameworks` as command.
2. Add each of the required frameworks above as input file `$(SRCROOT)/Carthage/Build/(iOS|tvOS)/FrameworkName.framework`.

### Static framework integration

1. Run `carthage update --configuration Release-static` to update the dependencies. 
2. Add the frameworks listed above and generated in the `Carthage/Build/(iOS|tvOS)/Static` folder to the _Linked frameworks and libraries_ list of your target.
3. Also add any resource bundle `.bundle` found within the `.framework` folders to your target directly.
4. Add the `-all_load` flag to your target _Other linker flags_.

## Building the project

A [Makefile](../Makefile) provides several targets to build and package the library. The available targets can be listed by running the following command from the project root folder:

```
make help
```

Alternatively, you can of course open the project with Xcode and use the available schemes.

## Usage

The framework is not meant to be used directly.

## License

See the [LICENSE](../LICENSE) file for more information.
