//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCell.h"

@class SOperationFormPickupOrDropoffCellModel, UIButton, UIView;

@interface SOperationFormPickupOrDropoffCell : SOperationFormCell
{
    SOperationFormPickupOrDropoffCellModel *_pickupOrDropoffCellModel;
    UIView *_separatorView;
    UIView *_lineView;
    UIView *_pickUpBgView;
    UIView *_dropOffBgView;
    UIButton *_pickUpBtn;
    UIButton *_dropOffBtn;
}

@property(retain, nonatomic) UIButton *dropOffBtn; // @synthesize dropOffBtn=_dropOffBtn;
@property(retain, nonatomic) UIButton *pickUpBtn; // @synthesize pickUpBtn=_pickUpBtn;
@property(retain, nonatomic) UIView *dropOffBgView; // @synthesize dropOffBgView=_dropOffBgView;
@property(retain, nonatomic) UIView *pickUpBgView; // @synthesize pickUpBgView=_pickUpBgView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) SOperationFormPickupOrDropoffCellModel *pickupOrDropoffCellModel; // @synthesize pickupOrDropoffCellModel=_pickupOrDropoffCellModel;
- (void).cxx_destruct;
- (void)setDataModel:(id)arg1;
- (void)changePickupOrDropoff:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
