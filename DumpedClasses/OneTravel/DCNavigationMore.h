//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCGuideButton, DCUIPopListView, NSArray, NSString, RACSubject, UIViewController;

@interface DCNavigationMore : NSObject
{
    _Bool _isHideButton;
    CDUnknownBlockType _freeOrderBlock;
    CDUnknownBlockType _cancelOrderCompletion;
    RACSubject *_actionSubject;
    RACSubject *_moreSubject;
    NSString *_identify;
    NSArray *_itemsArray;
    UIViewController *_parentVC;
    DCGuideButton *_guideButton;
    DCUIPopListView *_popListView;
}

@property(retain, nonatomic) DCUIPopListView *popListView; // @synthesize popListView=_popListView;
@property(retain, nonatomic) DCGuideButton *guideButton; // @synthesize guideButton=_guideButton;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
@property(nonatomic) _Bool isHideButton; // @synthesize isHideButton=_isHideButton;
@property(retain, nonatomic) RACSubject *moreSubject; // @synthesize moreSubject=_moreSubject;
@property(retain, nonatomic) RACSubject *actionSubject; // @synthesize actionSubject=_actionSubject;
@property(copy, nonatomic) CDUnknownBlockType cancelOrderCompletion; // @synthesize cancelOrderCompletion=_cancelOrderCompletion;
@property(copy, nonatomic) CDUnknownBlockType freeOrderBlock; // @synthesize freeOrderBlock=_freeOrderBlock;
- (void).cxx_destruct;
- (void)pushWebViewWithUrl:(id)arg1;
- (void)showMoreTableView;
- (id)transformTableViewContextArray:(id)arg1;
- (void)setNavigationModel:(id)arg1;
- (id)initWithVC:(id)arg1;

@end
