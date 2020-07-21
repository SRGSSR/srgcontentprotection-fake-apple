[![SRG Content Protection Fake logo](README-images/logo.png)](https://github.com/SRGSSR/srgcontentprotection-fake-apple)

[![GitHub releases](https://img.shields.io/github/v/release/SRGSSR/srgcontentprotection-fake-apple)](https://github.com/SRGSSR/srgcontentprotection-fake-apple/releases) [![platform](https://img.shields.io/badge/platfom-ios%20%7C%20tvos-blue)](https://github.com/SRGSSR/srgcontentprotection-fake-apple) [![GitHub license](https://img.shields.io/github/license/SRGSSR/srgcontentprotection-fake-apple)](https://github.com/SRGSSR/srgcontentprotection-fake-apple/blob/master/LICENSE)

## About

The proprietary SRG Content Protection framework contains the sensitive logic required for protected media playback. In public builds (especially when frameworks are statically linked), it can be replaced by this fake framework whose sole purpose is to ensure binary compatibility with the framework it replaces.

## Compatibility

The library is suitable for applications running on iOS 9, tvOS 12 and above. The project is meant to be compiled with the latest Xcode version.

## Contributing

If you want to contribute to the project, have a look at our [contributing guide](CONTRIBUTING.md).

## Integration

The library must be integrated using [Swift Package Manager](https://swift.org/package-manager) directly [within Xcode](https://developer.apple.com/documentation/xcode/adding_package_dependencies_to_your_app). You can also declare the library as a dependency of another one directly in the associated `Package.swift` manifest.

## Usage

The framework is not meant to be used directly.

## License

See the [LICENSE](../LICENSE) file for more information.
