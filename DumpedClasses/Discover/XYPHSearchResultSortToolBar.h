//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYSortToolBar.h"

@class NSArray, UIButton, UILabel;

@interface XYPHSearchResultSortToolBar : XYSortToolBar
{
    _Bool _filterButtonSelected;
    unsigned long long _style;
    CDUnknownBlockType _filterButtonClick;
    UILabel *_infoLabel;
    UIButton *_filterButton;
    NSArray *_notesSortArray;
    NSArray *_notesSortDetailArray;
    NSArray *_goodsSortArray;
    NSArray *_goodsSortDetailArray;
}

@property(retain, nonatomic) NSArray *goodsSortDetailArray; // @synthesize goodsSortDetailArray=_goodsSortDetailArray;
@property(retain, nonatomic) NSArray *goodsSortArray; // @synthesize goodsSortArray=_goodsSortArray;
@property(retain, nonatomic) NSArray *notesSortDetailArray; // @synthesize notesSortDetailArray=_notesSortDetailArray;
@property(retain, nonatomic) NSArray *notesSortArray; // @synthesize notesSortArray=_notesSortArray;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(copy, nonatomic) CDUnknownBlockType filterButtonClick; // @synthesize filterButtonClick=_filterButtonClick;
@property(nonatomic) _Bool filterButtonSelected; // @synthesize filterButtonSelected=_filterButtonSelected;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setFilterButtonChosenStatus:(_Bool)arg1;
- (void)setFilterButtonSelectedStatus:(_Bool)arg1;
- (void)filterButtonEvent:(id)arg1;
- (void)setToolBarTitle:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

