#include "Storehouse.h"
#include "types.h"

Storehouse::Storehouse(ElementID _id) {

    id = _id;

    depot = new IPackageDepot();


}



ElementID Storehouse::getId() {
    return id;
}
