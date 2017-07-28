//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

@interface TTInstallIDManager : NSObject <UIApplicationDelegate>
{
    NSString *_installID;
    NSString *_deviceID;
    NSString *_baiduMapAppKey;
    CDUnknownBlockType _configParamsBlock;
    CDUnknownBlockType _didRegisterBlock;
}

+ (id)getInstallIDURLString;
+ (_Bool)isICloudAvailable;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType didRegisterBlock; // @synthesize didRegisterBlock=_didRegisterBlock;
@property(copy, nonatomic) CDUnknownBlockType configParamsBlock; // @synthesize configParamsBlock=_configParamsBlock;
@property(copy, nonatomic) NSString *baiduMapAppKey; // @synthesize baiduMapAppKey=_baiduMapAppKey;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (void)saveDeviceAndInstallID:(id)arg1;
- (void)configureMapAppKey:(id)arg1;
- (void)startGetInstallID:(CDUnknownBlockType)arg1;
- (void)startGetInstallIDIfNeeded;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
- (id)configParams;
- (void)configureService:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
