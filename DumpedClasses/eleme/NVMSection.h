//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSSet, NSString, NVMHeaderFooter;

@interface NVMSection : NSObject
{
    NSArray *_rows;
    NVMHeaderFooter *_header;
    NVMHeaderFooter *_footer;
    NSString *_identifier;
    NSMutableSet *_mutableCellClassesToRegister;
    NSMutableSet *_mutableCellNibNamesToRegister;
}

+ (id)sectionWithRows:(id)arg1;
+ (id)sectionWithRow:(id)arg1;
@property(retain, nonatomic) NSMutableSet *mutableCellNibNamesToRegister; // @synthesize mutableCellNibNamesToRegister=_mutableCellNibNamesToRegister;
@property(retain, nonatomic) NSMutableSet *mutableCellClassesToRegister; // @synthesize mutableCellClassesToRegister=_mutableCellClassesToRegister;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NVMHeaderFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NVMHeaderFooter *header; // @synthesize header=_header;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSSet *cellNibNamesToRegister;
@property(readonly, nonatomic) NSSet *cellClassesToRegister;
- (id)footerTitle;
- (id)footerViewForTableView:(id)arg1 section:(long long)arg2;
- (double)footerHeightForSection:(long long)arg1;
- (id)headerTitle;
- (id)headerViewForTableView:(id)arg1 section:(long long)arg2;
- (double)headerHeightForSection:(long long)arg1;
- (void)registerCellAndHeaderFooterForTableView:(id)arg1;

@end
