//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OHAttributedLabel, UILabel;

@interface KTVInvitePromptPanel : UIView
{
    OHAttributedLabel *_desAttrLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) OHAttributedLabel *desAttrLabel; // @synthesize desAttrLabel=_desAttrLabel;
- (void).cxx_destruct;
- (void)clearData;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end
