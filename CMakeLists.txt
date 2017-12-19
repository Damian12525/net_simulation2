cmake_minimum_required(VERSION 3.9)
project(net_simulation)

set(CMAKE_CXX_STANDARD 14)

add_executable(net_simulation main.cpp Factory.cpp Factory.h Worker.cpp Worker.h Ramp.cpp Ramp.h Storehouse.cpp Storehouse.h TimeOffset.cpp TimeOffset.h Time.cpp Time.h SpecificTurnsReportNotifier.cpp SpecificTurnsReportNotifier.h PackageQueueLIFO.cpp PackageQueueLIFO.h PackageQueueFIFO.cpp PackageQueueFIFO.h PackageDequeue.cpp PackageDequeue.h IPackageQueue.cpp IPackageQueue.h IPackageReceiver.cpp IPackageReceiver.h IReportNotifier.cpp IReportNotifier.h IntervalReportNotifier.cpp IntervalReportNotifier.h IPackageDepot.cpp IPackageDepot.h PackageSender.cpp PackageSender.h ReceiverPreferences.cpp ReceiverPreferences.h Package.cpp Package.h ReceiverType.cpp ReceiverType.h ElementID.cpp ElementID.h)