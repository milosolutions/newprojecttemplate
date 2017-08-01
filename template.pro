CONFIG += tests

TEMPLATE = subdirs

SUBDIRS += template \

tests {
    !android {
        CONFIG(debug, debug|release) {
            message("Running test suite")
            SUBDIRS += tests \
        }
    }
}
