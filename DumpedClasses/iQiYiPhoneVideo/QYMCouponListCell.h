//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, NSString, QYMCouponListDataModel, UIButton, UIImageView, UILabel;
@protocol QYMCouponListCellDelegate;

@interface QYMCouponListCell : UITableViewCell
{
    _Bool _isChoosed;
    _Bool _canChoose;
    id <QYMCouponListCellDelegate> _delegate;
    UIImageView *_defaultImage;
    UILabel *_couponTypeDescription;
    UILabel *_couponValue;
    UILabel *_title;
    UILabel *_expireData;
    UILabel *_couponDescription1;
    UILabel *_couponDescription2;
    UILabel *_couponUseType;
    UILabel *_couponStatusType;
    UIImageView *_couponStatusImage;
    QYMCouponListDataModel *_dataSource;
    NSMutableArray *_cellExtendArray;
    UIImageView *_describeImage;
    UIButton *_toActivity;
    NSString *_orderId;
    UIImageView *_willExpireImage;
    UILabel *_willExpireLabel;
}

+ (double)calcuCouponListDataCellHeight:(long long)arg1 cellDesHeight:(long long)arg2;
@property(retain, nonatomic) UILabel *willExpireLabel; // @synthesize willExpireLabel=_willExpireLabel;
@property(retain, nonatomic) UIImageView *willExpireImage; // @synthesize willExpireImage=_willExpireImage;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) _Bool canChoose; // @synthesize canChoose=_canChoose;
@property(nonatomic) _Bool isChoosed; // @synthesize isChoosed=_isChoosed;
@property(retain, nonatomic) UIButton *toActivity; // @synthesize toActivity=_toActivity;
@property(retain, nonatomic) UIImageView *describeImage; // @synthesize describeImage=_describeImage;
@property(retain, nonatomic) NSMutableArray *cellExtendArray; // @synthesize cellExtendArray=_cellExtendArray;
@property(retain, nonatomic) QYMCouponListDataModel *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIImageView *couponStatusImage; // @synthesize couponStatusImage=_couponStatusImage;
@property(retain, nonatomic) UILabel *couponStatusType; // @synthesize couponStatusType=_couponStatusType;
@property(retain, nonatomic) UILabel *couponUseType; // @synthesize couponUseType=_couponUseType;
@property(retain, nonatomic) UILabel *couponDescription2; // @synthesize couponDescription2=_couponDescription2;
@property(retain, nonatomic) UILabel *couponDescription1; // @synthesize couponDescription1=_couponDescription1;
@property(retain, nonatomic) UILabel *expireData; // @synthesize expireData=_expireData;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *couponValue; // @synthesize couponValue=_couponValue;
@property(retain, nonatomic) UILabel *couponTypeDescription; // @synthesize couponTypeDescription=_couponTypeDescription;
@property(retain, nonatomic) UIImageView *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) __weak id <QYMCouponListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)couponImmediateUse:(id)arg1;
- (void)initCouponStatusImage;
- (void)layoutCouponDescription:(id)arg1;
- (void)initCouponDescription;
- (void)layoutExpireData:(id)arg1;
- (void)initExpireData;
- (void)layoutCouponName:(id)arg1;
- (void)initCouponName;
- (void)layoutCouponWillExpireImage:(id)arg1;
- (void)initCouponWillExpireImage;
- (void)layoutCouponTypeName:(id)arg1;
- (void)initCouponTypeName;
- (void)layoutDescribeImage:(id)arg1;
- (void)initDescribeImage;
- (void)layoutDefaultImage:(id)arg1;
- (void)initDefaultImage;
- (void)layoutDataSource:(id)arg1;
- (void)layoutSubviewsWithData:(id)arg1 orderId:(id)arg2 choosed:(_Bool)arg3 canChoose:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

