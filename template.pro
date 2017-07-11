CONFIG += tests

TEMPLATE = subdirs

SUBDIRS += src \

## Set up application version
VERSION=0.0.1

tests {
    !android {
        CONFIG(debug, debug|release) {
            message("Running test suite")
            SUBDIRS += tests \
        }
    }
}
