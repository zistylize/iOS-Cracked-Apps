//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXPageDomainUtility : NSObject
{
    _Bool stopRunning;
}

+ (void)_performBlockOnScreencastThread:(CDUnknownBlockType)arg1;
+ (id)screencastThread;
+ (_Bool)isContainWebView:(id)arg1;
+ (id)getCurrentKeyController;
+ (id)scaleImage:(id)arg1 toScale:(float)arg2;
+ (id)captureWithScale:(float)arg1;
+ (id)screencastMetaDataWithScale:(float)arg1;
+ (id)screencastDataScale:(float)arg1;
@property(nonatomic) _Bool stopRunning; // @synthesize stopRunning;
- (void)_runLoopThread;

@end

