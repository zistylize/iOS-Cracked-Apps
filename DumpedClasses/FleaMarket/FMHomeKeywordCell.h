//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMHomeBaseCell.h"

@class NSArray, NSMutableArray, UIView;

@interface FMHomeKeywordCell : FMHomeBaseCell
{
    NSMutableArray *_buttonArray;
    UIView *_gapView;
    NSArray *_keywords;
}

@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (void)clickButton:(id)arg1;
- (id)button;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
