//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class AVAsset, CLLocation, NSDate, NSDictionary, NSString, NSURL, QQAsset, QZPOIInfo, QZWeatherInfo;

@interface QZPreviewVideoModel : QZoneModel
{
    unsigned long long _fileSize;
    QQAsset *_videoQQAsset;
    NSURL *_assetURL;
}

+ (id)excludedPropertyKeys;
+ (id)createLocalTrimVideoSavePath;
+ (long long)localMaxBitrate;
+ (long long)localCatMaxDuration;
+ (unsigned long long)compressedFileSize:(unsigned long long)arg1;
+ (_Bool)isNeedCompressVideo:(double)arg1;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) QQAsset *videoQQAsset; // @synthesize videoQQAsset=_videoQQAsset;
- (void).cxx_destruct;
- (_Bool)canUpload;
- (_Bool)isMicroVideo;
- (_Bool)isNeedCompressVideo;
- (unsigned long long)firstAngleType;
- (id)firstImage:(struct CGSize *)arg1 error:(id *)arg2;
- (id)imageWithTime:(CDStruct_1b6d18a9)arg1 originSize:(struct CGSize *)arg2 error:(id *)arg3;
- (long long)fps;
- (unsigned long long)compressedFileSize;
- (unsigned long long)fileSize;
- (void)deleteCacheFile;
- (void)check;
- (void)refreshDurationFromFile;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool compressed; // @dynamic compressed;
@property(nonatomic) long long currentVideoOrientation; // @dynamic currentVideoOrientation;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isEdited; // @dynamic isEdited;
@property(nonatomic) _Bool isLocal; // @dynamic isLocal;
@property(retain, nonatomic) CLLocation *location; // @dynamic location;
@property(retain, nonatomic) NSDictionary *mediaMetaData; // @dynamic mediaMetaData;
@property(retain, nonatomic) NSString *mergedVideoPath; // @dynamic mergedVideoPath;
@property(nonatomic) _Bool needExport; // @dynamic needExport;
@property(nonatomic) _Bool needSaveAlbum; // @dynamic needSaveAlbum;
@property(nonatomic) _Bool originQuality; // @dynamic originQuality;
@property(retain, nonatomic) QZPOIInfo *poiInfo; // @dynamic poiInfo;
@property(retain, nonatomic) NSDate *shootTime; // @dynamic shootTime;
@property(nonatomic) _Bool shouldCliped; // @dynamic shouldCliped;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic) double stopTime; // @dynamic stopTime;
@property(nonatomic) _Bool supportClientCompress; // @dynamic supportClientCompress;
@property(nonatomic) _Bool supportOriginQuality; // @dynamic supportOriginQuality;
@property(retain, nonatomic) AVAsset *videoAsset; // @dynamic videoAsset;
@property(nonatomic) double videoDuration; // @dynamic videoDuration;
@property(retain, nonatomic) NSDictionary *videoEditInfo; // @dynamic videoEditInfo;
@property(nonatomic) _Bool waitForWifi; // @dynamic waitForWifi;
@property(retain, nonatomic) QZWeatherInfo *weatherInfo; // @dynamic weatherInfo;

@end

