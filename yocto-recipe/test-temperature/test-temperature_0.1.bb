SUMMARY = "Test Temperature"
LICENSE = "CLOSED"

SRC_URI = "git://github.com/AvilaGTZ/TestTemperature;protocol=ssh;rev=1d38081a4970f195bb21cbc567f2a7647ba83fcc"

S = "${WORKDIR}/git"

FILES_SOLIBSDEV = ""
SOLIBS = ".so"

DEPENDS = "cmake-native"
inherit pkgconfig cmake

EXTRA_OECMAKE += "-DCMAKE_INSTALL_PREFIX=${prefix}"

do_install() {
    install -d ${D}${bindir}
    install -d ${D}${libdir}
    install -m 0755 ${S}/../build/src/TestTemperature ${D}${bindir}
    install -m 0755 ${S}/../build/src/libtemperature.so ${D}${libdir}
}


FILES:${PN} += "${bindir}/TestTemperature ${libdir}/libtemperature.so"
