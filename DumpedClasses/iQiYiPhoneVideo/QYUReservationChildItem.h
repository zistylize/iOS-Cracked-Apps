//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PosterImageView, QYUReservationButton, UIButton, UILabel;

@interface QYUReservationChildItem : UIView
{
    UILabel *_labelTitle;
    UIView *_viewFocusCircle;
    UIView *_viewSeperateLine;
    PosterImageView *_imageViewPoster;
    UIButton *_clickPoster;
    QYUReservationButton *_buttonReservation;
    UILabel *_labelTime;
}

@property(retain, nonatomic) UILabel *labelTime; // @synthesize labelTime=_labelTime;
@property(retain, nonatomic) QYUReservationButton *buttonReservation; // @synthesize buttonReservation=_buttonReservation;
@property(retain, nonatomic) UIButton *clickPoster; // @synthesize clickPoster=_clickPoster;
@property(retain, nonatomic) PosterImageView *imageViewPoster; // @synthesize imageViewPoster=_imageViewPoster;
@property(retain, nonatomic) UIView *viewSeperateLine; // @synthesize viewSeperateLine=_viewSeperateLine;
@property(retain, nonatomic) UIView *viewFocusCircle; // @synthesize viewFocusCircle=_viewFocusCircle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

