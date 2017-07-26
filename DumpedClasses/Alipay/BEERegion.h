//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UINavigationController, UIViewController;

@interface BEERegion : NSObject
{
    UIViewController *_startPointVC;
    UINavigationController *_navi;
    CDUnknownBlockType _handler;
    NSMutableDictionary *_result;
}

+ (id)contryAndStateCodeForFullPath:(id)arg1;
+ (void)showRegionSubRegionControllerWithNavigationController:(id)arg1 backToViewController:(id)arg2 curSelectedRegion:(id)arg3 regionItem:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)showRegionControllerWithNavigationController:(id)arg1 backToViewController:(id)arg2 curSelectedRegion:(id)arg3 config:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)showRegionControllerWithNavigationController:(id)arg1 backToViewController:(id)arg2 curSelectedRegion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableDictionary *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak UINavigationController *navi; // @synthesize navi=_navi;
@property(nonatomic) __weak UIViewController *startPointVC; // @synthesize startPointVC=_startPointVC;
- (void).cxx_destruct;
- (void)finished;
- (id)init;

@end
