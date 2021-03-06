//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBCPUEnergy, FBDisplayBrightness, FBLocationDuration, FBPMBatteryData, FBPMCameraCaptureTime, FBPMNetLoggerHelper;

@interface FBPowerMetricsData : NSObject
{
    FBPMBatteryData *_batteryData;
    float _startBatteryLevel;
    long long _totalChargingTimeInMS;
    struct unique_ptr<FB::PowerMetrics::ProcessPMCpuStat, std::__1::default_delete<FB::PowerMetrics::ProcessPMCpuStat>> _cpuState;
    struct unique_ptr<FB::NetStat::NetStats::Reading, std::__1::default_delete<FB::NetStat::NetStats::Reading>> _processNetStat;
    FBPMNetLoggerHelper *_mqttLoggerHelper;
    FBLocationDuration *_locationDuration;
    FBPMCameraCaptureTime *_cameraTime;
    struct CameraTimeStat _cameraStat;
    struct PowerModelConfig _modelConfig;
    FBCPUEnergy *_cpuEnergy;
    double _cpuEnergyValue;
    FBDisplayBrightness *_displayBrightness;
    struct DisplayBrightnessInfo _displayBrightnessInfo;
    double _networkEnergy;
    double _cameraEnergy;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_takeSnapshotWithUpdateCurrent:(_Bool)arg1;
- (id)diffSinceLastUpdate;
- (id)updateData;
- (id)init;

@end

