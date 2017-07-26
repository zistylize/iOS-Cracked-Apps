//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableDictionary, NSTimer;

@interface TBHomeHeadLine : UIView
{
    _Bool _isRunningBeforeBackground;
    NSDictionary *_sourceDict;
    double _edgeInsetLeft;
    double _rollInterval;
    long long _mainLabelTextColor;
    unsigned long long _type;
    NSMutableDictionary *_subSections;
    long long _nowIndex;
    NSTimer *_controlTimer;
    UIView *_nowLabelsView;
    UIView *_animatingLabelsView;
}

@property(nonatomic) _Bool isRunningBeforeBackground; // @synthesize isRunningBeforeBackground=_isRunningBeforeBackground;
@property(retain, nonatomic) UIView *animatingLabelsView; // @synthesize animatingLabelsView=_animatingLabelsView;
@property(retain, nonatomic) UIView *nowLabelsView; // @synthesize nowLabelsView=_nowLabelsView;
@property(retain, nonatomic) NSTimer *controlTimer; // @synthesize controlTimer=_controlTimer;
@property(nonatomic) long long nowIndex; // @synthesize nowIndex=_nowIndex;
@property(retain, nonatomic) NSMutableDictionary *subSections; // @synthesize subSections=_subSections;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long mainLabelTextColor; // @synthesize mainLabelTextColor=_mainLabelTextColor;
@property(nonatomic) double rollInterval; // @synthesize rollInterval=_rollInterval;
@property(nonatomic) double edgeInsetLeft; // @synthesize edgeInsetLeft=_edgeInsetLeft;
@property(retain, nonatomic) NSDictionary *sourceDict; // @synthesize sourceDict=_sourceDict;
- (void).cxx_destruct;
- (id)safeObjectAtIndex:(long long)arg1 inArray:(id)arg2;
- (double)adaptScreenPoint:(double)arg1;
- (id)accessibilityLabel;
- (void)initializeButton;
- (id)mainLabelWithTitle:(id)arg1;
- (id)specialLabelWithTitle:(id)arg1;
- (id)buildLabelsView;
- (void)replaceLabelsViewAnimated:(_Bool)arg1;
- (void)initializeView;
- (void)trackClickEvent;
- (_Bool)needRTRefresh;
- (void)jumpToNextPage;
- (void)replaceHeadLine;
- (void)stopRolling;
- (void)startRolling;
- (void)dealloc;
- (id)init;
- (void)didEnterBackground:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
