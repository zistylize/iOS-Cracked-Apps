//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GMSServerResourceRequest : NSObject
{
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
    GMSServerResourceRequest *_nextRequest;
}

- (void).cxx_destruct;
- (void)invokeCallbacksWithResource:(id)arg1;
- (void)addDuplicate:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
