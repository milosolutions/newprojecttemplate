# Main qmake configuration file for unit tests

TEMPLATE = subdirs

# Add new test cases here:
SUBDIRS += \


# Please use convenience includes:
# testConfig.pri - contains general configs
# includeCrypto.pri - easily include EimCrypto into your test
# includeServerHostAndPort.pri - add it if you get "missing declaration for
#     SERVER_HOST" and "SERVER_PORT"
# data/testData.pri - includes test data (some files in a resource for easy
#     testing of IO


# Tests can be run in Qt Creator (enable AutoTest plugin, then run it from panel 8)
# Tests can be run from command line. Just run:
# $ make check
# In build directory (where root Makefile is).
