//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, NVMBlurView, UIView;

@interface ESPCateSortFilterTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isBeingDismissed;
    UIView *_transitionView;
    NVMBlurView *_backgroundView;
    double _offsetY;
}

@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(retain, nonatomic) NVMBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *transitionView; // @synthesize transitionView=_transitionView;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

