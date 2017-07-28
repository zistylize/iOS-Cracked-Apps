//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CLSAnalyticsViewControllerTrackingController : NSObject
{
    _Bool _isTracking;
    id <CLSAnalyticsViewControllerTrackingDelegate> _delegate;
    NSMutableSet *_blackListViewControllerClasses;
}

+ (_Bool)replaceMethodImplementationForClass:(Class)arg1 selector:(SEL)arg2 withImplementation:(CDUnknownFunctionPointerType)arg3 storingOldImplementation:(CDUnknownFunctionPointerType *)arg4;
+ (id)sharedInstance;
@property(nonatomic) __weak id <CLSAnalyticsViewControllerTrackingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanUpUIViewControllerSwizzle;
- (void)setUpUIViewControllerSwizzle;
- (_Bool)shouldLogViewController:(id)arg1;
- (_Bool)isBlacklistedViewControllerClass:(Class)arg1;
- (void)removeBlackListViewControllerClass:(Class)arg1;
- (void)addBlackListViewControllerClass:(Class)arg1;
- (void)startTracking;
- (void)disposeSharedInstance;
- (id)init;
- (void)dealloc;

@end
