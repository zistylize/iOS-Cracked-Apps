//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class TaxiCancelInfoDetailModel<Optional>;

@interface TaxiCancelInfoModel : TaxiBaseModel
{
    TaxiCancelInfoDetailModel<Optional> *_before;
    TaxiCancelInfoDetailModel<Optional> *_after;
}

@property(retain, nonatomic) TaxiCancelInfoDetailModel<Optional> *after; // @synthesize after=_after;
@property(retain, nonatomic) TaxiCancelInfoDetailModel<Optional> *before; // @synthesize before=_before;
- (void).cxx_destruct;

@end
