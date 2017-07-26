//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface CTFLightCabinInfoAndRefundView : UIView
{
    UILabel *_indexTypeView;
    UILabel *_cabinInfoView;
    UILabel *_refundView;
    UIImageView *_arrowView;
}

+ (double)createOncesInfoViewWithType:(id)arg1 cabinInfo:(id)arg2 isHighLightCabinInfo:(_Bool)arg3 refund:(id)arg4 maxWidth:(double)arg5 tag:(double)arg6 inView:(id)arg7;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *refundView; // @synthesize refundView=_refundView;
@property(retain, nonatomic) UILabel *cabinInfoView; // @synthesize cabinInfoView=_cabinInfoView;
@property(retain, nonatomic) UILabel *indexTypeView; // @synthesize indexTypeView=_indexTypeView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)cabinInfoViewHeightWithList:(id)arg1;

@end
