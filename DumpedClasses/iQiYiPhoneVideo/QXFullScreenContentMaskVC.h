//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

@interface QXFullScreenContentMaskVC : QiXiuBaseVC
{
    CDUnknownBlockType _canDragOnPointBlock;
    CDUnknownBlockType _didCleanScreen;
}

@property(copy, nonatomic) CDUnknownBlockType didCleanScreen; // @synthesize didCleanScreen=_didCleanScreen;
@property(copy, nonatomic) CDUnknownBlockType canDragOnPointBlock; // @synthesize canDragOnPointBlock=_canDragOnPointBlock;
- (void).cxx_destruct;
- (id)contentView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

