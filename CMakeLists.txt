cmake_minimum_required(VERSION 3.8)
project(net_simulation2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Factory.cpp
        Factory.h
        functions.cpp
        functions.h
        IntervalReportNotifier.cpp
        IntervalReportNotifier.h
        IPackageDepot.h
        IPackageQueue.h
        IPackageReceiver.cpp
        IPackageReceiver.h
        IReportNotifier.cpp
        IReportNotifier.h
        main.cpp
        Package.cpp
        Package.h
        PackageQueue.cpp
        PackageQueue.h
        PackageSender.cpp
        PackageSender.h
        QueueType.h
        Ramp.cpp
        Ramp.h
        ReceiverPreferences.cpp
        ReceiverPreferences.h
        ReceiverType.h
        SpecificTurnsReportNotifier.cpp
        SpecificTurnsReportNotifier.h
        Storehouse.cpp
        Storehouse.h
        types.h
        Worker.cpp
        Worker.h)

add_executable(net_simulation2 ${SOURCE_FILES})