//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CTDiscoverGradientView, CTImageView, UILabel;

@interface CTDiscoverMoreDestinationCollectionViewCell : UICollectionViewCell
{
    UILabel *_nameLabel;
    UILabel *_sloganLabel;
    UILabel *_floorPriceLabel;
    CTImageView *_headerImageView;
    CTDiscoverGradientView *_typeView;
}

@property(nonatomic) __weak CTDiscoverGradientView *typeView; // @synthesize typeView=_typeView;
@property(nonatomic) __weak CTImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak UILabel *floorPriceLabel; // @synthesize floorPriceLabel=_floorPriceLabel;
@property(nonatomic) __weak UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

