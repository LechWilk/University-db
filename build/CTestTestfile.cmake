# CMake generated Testfile for 
# Source directory: /home/leszol/CS/University-db
# Build directory: /home/leszol/CS/University-db/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Univerity-db_test "/home/leszol/CS/University-db/build/Univerity-db-ut")
set_tests_properties(Univerity-db_test PROPERTIES  _BACKTRACE_TRIPLES "/home/leszol/CS/University-db/CMakeLists.txt;47;add_test;/home/leszol/CS/University-db/CMakeLists.txt;0;")
subdirs("googletest-build")
