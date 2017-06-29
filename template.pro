CONFIG += tests

TEMPLATE = subdirs

SUBDIRS += src \

tests {
    !android {
        CONFIG(debug, debug|release) {
            message("Running test suite")
            SUBDIRS += tests \
        }
    }
}
