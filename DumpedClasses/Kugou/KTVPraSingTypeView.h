//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FocusSwitch, KGThemeButton;

@interface KTVPraSingTypeView : UIView
{
    UIView *contentView;
    KGThemeButton *orginBtn;
    KGThemeButton *songBtn;
    KGThemeButton *intelligenceBtn;
    KGThemeButton *selectBtn;
    _Bool canSlide;
    FocusSwitch *_focusSwitch;
    _Bool _hasOrgin;
    id <KTVPraSingTypeViewDelegate> _delegate;
}

@property(nonatomic) _Bool hasOrgin; // @synthesize hasOrgin=_hasOrgin;
@property(nonatomic) __weak id <KTVPraSingTypeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectBtn:(id)arg1;
- (void)didSelectBtn;
- (void)createFocusSwitch;
- (void)pan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
