//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBDocument, TTTAttributedLabel, UIImageView;

@interface APGSearchErrorView : UIView
{
    TTTAttributedLabel *_attributedLabel;
    UIImageView *_icon;
    FBDocument *_relatedSearchDoc;
}

@property(retain, nonatomic) FBDocument *relatedSearchDoc; // @synthesize relatedSearchDoc=_relatedSearchDoc;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) TTTAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showRelatedSearchResult:(id)arg1;
- (void)showText:(id)arg1;
- (void)showText:(id)arg1 withIcon:(id)arg2;
- (void)showIcon:(id)arg1;
- (void)commonInit;
- (id)init;

@end
