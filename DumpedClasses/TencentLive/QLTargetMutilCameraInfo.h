//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLTargetMutilCameraInfo : NSObject
{
    BOOL _videoFlag;
    NSString *_pid;
    NSString *_liveID;
    NSString *_cameraID;
    long long _videoFileSize;
    long long _payState;
}

@property(nonatomic) long long payState; // @synthesize payState=_payState;
@property(nonatomic) long long videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(nonatomic) BOOL videoFlag; // @synthesize videoFlag=_videoFlag;
@property(copy, nonatomic) NSString *cameraID; // @synthesize cameraID=_cameraID;
@property(copy, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end
