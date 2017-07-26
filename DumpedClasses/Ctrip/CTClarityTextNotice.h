//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView;

@interface CTClarityTextNotice : UIView <UIScrollViewDelegate>
{
    UIView *titleView_;
    UIView *textView_;
    UIScrollView *scrollView_;
    UIImageView *buttomImg;
    UIView *mainview_;
    _Bool _isOverseaStar;
    NSMutableArray *_titleArray;
    NSMutableArray *_textArray;
}

@property(retain, nonatomic) NSMutableArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
- (void).cxx_destruct;
- (void)autoSizeView;
- (void)drawText;
- (void)drawTitle;
- (void)closeAction:(id)arg1;
- (void)remove;
- (id)initWithFrame:(struct CGRect)arg1 isOverseaStar:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
