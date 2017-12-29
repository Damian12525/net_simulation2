#include "Package.h"

Package::Package() {

    packageCounter++;

}

Package::Package(ElementID _ID) {
    id = _ID;
    packageCounter++;

}

ElementID Package::getId() {
    return id;
}
