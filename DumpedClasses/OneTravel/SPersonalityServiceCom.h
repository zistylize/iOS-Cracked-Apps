//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "SFormCellModelDelegate.h"
#import "SFormDelegate.h"
#import "SListFormViewDelegate.h"

@class NSString, ONEPopupView, SListFormView;

@interface SPersonalityServiceCom : SBaseComponent <SFormDelegate, SFormCellModelDelegate, SListFormViewDelegate>
{
    SListFormView *_listFormView;
    ONEPopupView *_personalityServiceView;
}

@property(retain, nonatomic) ONEPopupView *personalityServiceView; // @synthesize personalityServiceView=_personalityServiceView;
@property(retain, nonatomic) SListFormView *listFormView; // @synthesize listFormView=_listFormView;
- (void).cxx_destruct;
- (id)sListFormView:(id)arg1 modelForCellAtIndexPath:(id)arg2;
- (long long)sListFormView:(id)arg1 numberOfCellsInSection:(long long)arg2;
- (long long)numberOfSectionsInListFormView:(id)arg1;
- (id)getFormCellModel:(id)arg1;
- (void)showPersonalityServiceView;
- (void)cancelSeletedPersonalityServiceData;
- (void)clearPersonalityServiceData;
- (void)confirmSelectedPersonalityServiceData;
- (void)bind:(id)arg1;
- (id)getContainerView;
- (long long)numberOfSections;
- (long long)numberOfCellsInSection:(long long)arg1;
- (id)modelForCellAtIndexPath:(id)arg1;
- (id)ofDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
