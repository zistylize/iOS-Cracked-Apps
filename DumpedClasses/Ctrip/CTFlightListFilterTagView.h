//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFlightFilterItemViewDelegate.h"

@class NSString, UIButton, UILabel, UIScrollView;

@interface CTFlightListFilterTagView : UIView <CTFlightFilterItemViewDelegate>
{
    _Bool _isDeleteAction;
    UILabel *_titleLabel;
    UIScrollView *_itemContainerView;
    UIButton *_closeButton;
    id <CTFlightListFilterTagViewDelegate> _delegate;
}

@property(nonatomic) _Bool isDeleteAction; // @synthesize isDeleteAction=_isDeleteAction;
@property(nonatomic) __weak id <CTFlightListFilterTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIScrollView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)closeBtnAction:(id)arg1;
- (void)didDeleteActionWithItemModel:(id)arg1;
- (void)changeValueActionWithItemModel:(id)arg1;
- (struct CGSize)setupDataWithDataAarry:(id)arg1 title:(id)arg2 type:(int)arg3 hiddenCloseBtn:(_Bool)arg4;
- (void)initBaseView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
