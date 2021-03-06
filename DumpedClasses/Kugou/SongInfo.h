//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SongInfo : KugouObject <NSCopying>
{
    _Bool _isUnknownPrivilege;
    _Bool _isnew;
    _Bool _isPrioritySong;
    _Bool _hadSendPlayLog;
    _Bool _isLocalExist;
    _Bool _hasLocalMusic;
    _Bool _isFree;
    _Bool _noPrivilege;
    _Bool _isCache;
    unsigned short _bitrate;
    unsigned int _fileSize;
    unsigned int _m4aFileSize;
    unsigned int _superMp3Size;
    unsigned int _sqSize;
    int _author_id;
    int _hasAccompany;
    int _chargeType;
    int _isFirst;
    int _songSource;
    int _songSourceNew;
    int _inList;
    unsigned long long _songId;
    NSString *_musicName;
    NSString *_singerName;
    NSString *_musicpath;
    NSString *_strFileHash;
    double _musicTime;
    NSString *_superMp3Hash;
    NSString *_sqHash;
    NSString *_str_mvhash;
    long long _mvtrack;
    long long _mvtype;
    long long _albumId;
    double _albumMatchTime;
    NSString *_albumName;
    NSString *_sourceSongHash;
    NSString *_payAlbumID;
    double _accompanyTime;
    NSString *_fromPagePath;
    NSString *_musictitle;
    long long _currentPlayQuality;
    double _currentProgress;
    double _totalProgress;
    NSString *_radioImgUrl;
    long long _musicFromType;
    unsigned long long _privilege;
    unsigned long long _HQPrivilege;
    unsigned long long _SQPrivilege;
    NSString *_playUUIDStr;
    NSString *_topic;
    unsigned long long _KTVId;
    NSString *_searchSource;
    NSString *_fromSourceFMid;
    NSString *_fromSourceSpecicalid;
    NSString *_fromSourceRankid;
    NSString *_rankAddTime;
    long long _authSourceID;
    long long _listenCount;
    NSArray *_arrAuthorIdWithName;
}

+ (id)songInfoWithDictionary:(id)arg1;
+ (id)songInfoWithDic_netResult1:(id)arg1;
+ (id)songInfoWithMusicModel:(id)arg1;
@property(retain, nonatomic) NSArray *arrAuthorIdWithName; // @synthesize arrAuthorIdWithName=_arrAuthorIdWithName;
@property(nonatomic) long long listenCount; // @synthesize listenCount=_listenCount;
@property(nonatomic) long long authSourceID; // @synthesize authSourceID=_authSourceID;
@property(copy, nonatomic) NSString *rankAddTime; // @synthesize rankAddTime=_rankAddTime;
@property(copy, nonatomic) NSString *fromSourceRankid; // @synthesize fromSourceRankid=_fromSourceRankid;
@property(copy, nonatomic) NSString *fromSourceSpecicalid; // @synthesize fromSourceSpecicalid=_fromSourceSpecicalid;
@property(copy, nonatomic) NSString *fromSourceFMid; // @synthesize fromSourceFMid=_fromSourceFMid;
@property(nonatomic) int inList; // @synthesize inList=_inList;
@property(retain, nonatomic) NSString *searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) unsigned long long KTVId; // @synthesize KTVId=_KTVId;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *playUUIDStr; // @synthesize playUUIDStr=_playUUIDStr;
@property(nonatomic) _Bool noPrivilege; // @synthesize noPrivilege=_noPrivilege;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(nonatomic) unsigned long long SQPrivilege; // @synthesize SQPrivilege=_SQPrivilege;
@property(nonatomic) unsigned long long HQPrivilege; // @synthesize HQPrivilege=_HQPrivilege;
@property(nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, nonatomic) _Bool hasLocalMusic; // @synthesize hasLocalMusic=_hasLocalMusic;
@property(nonatomic) long long musicFromType; // @synthesize musicFromType=_musicFromType;
@property(copy, nonatomic) NSString *radioImgUrl; // @synthesize radioImgUrl=_radioImgUrl;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) long long currentPlayQuality; // @synthesize currentPlayQuality=_currentPlayQuality;
@property(nonatomic) _Bool isLocalExist; // @synthesize isLocalExist=_isLocalExist;
@property(copy, nonatomic) NSString *musictitle; // @synthesize musictitle=_musictitle;
@property(nonatomic) _Bool hadSendPlayLog; // @synthesize hadSendPlayLog=_hadSendPlayLog;
@property(nonatomic) int songSourceNew; // @synthesize songSourceNew=_songSourceNew;
@property(nonatomic) int songSource; // @synthesize songSource=_songSource;
@property(copy, nonatomic) NSString *fromPagePath; // @synthesize fromPagePath=_fromPagePath;
@property _Bool isPrioritySong; // @synthesize isPrioritySong=_isPrioritySong;
@property int isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) _Bool isnew; // @synthesize isnew=_isnew;
@property(nonatomic) int chargeType; // @synthesize chargeType=_chargeType;
@property(nonatomic) double accompanyTime; // @synthesize accompanyTime=_accompanyTime;
@property(nonatomic) int hasAccompany; // @synthesize hasAccompany=_hasAccompany;
@property(copy, nonatomic) NSString *payAlbumID; // @synthesize payAlbumID=_payAlbumID;
@property(nonatomic) _Bool isUnknownPrivilege; // @synthesize isUnknownPrivilege=_isUnknownPrivilege;
@property(copy, nonatomic) NSString *sourceSongHash; // @synthesize sourceSongHash=_sourceSongHash;
@property(nonatomic) int author_id; // @synthesize author_id=_author_id;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) double albumMatchTime; // @synthesize albumMatchTime=_albumMatchTime;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) long long mvtype; // @synthesize mvtype=_mvtype;
@property(nonatomic) long long mvtrack; // @synthesize mvtrack=_mvtrack;
@property(copy, nonatomic) NSString *str_mvhash; // @synthesize str_mvhash=_str_mvhash;
@property(nonatomic) unsigned int sqSize; // @synthesize sqSize=_sqSize;
@property(copy, nonatomic) NSString *sqHash; // @synthesize sqHash=_sqHash;
@property(nonatomic) unsigned int superMp3Size; // @synthesize superMp3Size=_superMp3Size;
@property(copy, nonatomic) NSString *superMp3Hash; // @synthesize superMp3Hash=_superMp3Hash;
@property(nonatomic) unsigned int m4aFileSize; // @synthesize m4aFileSize=_m4aFileSize;
@property(nonatomic) unsigned short bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) double musicTime; // @synthesize musicTime=_musicTime;
@property(retain, nonatomic) NSString *strFileHash; // @synthesize strFileHash=_strFileHash;
@property(copy, nonatomic) NSString *musicpath; // @synthesize musicpath=_musicpath;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy) NSString *musicName; // @synthesize musicName=_musicName;
@property(nonatomic) unsigned long long songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (id)songIdentificationKey;
- (id)sortName;
- (int)hightQualityType;
- (void)copyFromResultSet:(id)arg1;
- (_Bool)haveMV;
- (id)downLoadMusicHashWithQualityType:(int)arg1;
- (unsigned int)mp3FileSize;
- (void)setMp3FileSize:(unsigned int)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKTVSongInfo;
- (_Bool)isNotKugouMusic;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (_Bool)isIpod;
- (id)songURL;
- (void)setSongURL:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isFromAlbum;
- (id)absoluteMusicPath;
- (id)fitSearchSongName;
- (id)fitSongName;
- (id)fitSingerNames;
- (id)fitSortSingerName;
- (id)fitSingerName;
- (double)duration;
- (void)setDuration:(double)arg1;
- (_Bool)isBeforeVerison7:(id)arg1;
- (void)copyFromListenRankDictonary:(id)arg1;
- (void)copyFormMathcDictonary:(id)arg1;
- (void)copyFromDictonary:(id)arg1;
- (id)toDictionary;
- (_Bool)canCollectToNet;
- (void)copyFromSongInfo:(id)arg1;
- (_Bool)isOnline;
- (id)fileNameByDeleteBracket;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)isCanBeShowDownloadWithMoneyFlag;
- (_Bool)isFreeToDownload;
@property(nonatomic) long long updateKind;
@property(nonatomic) long long downloadStatus;
- (void)setPrivilegeFromGoods:(id)arg1;
- (id)toQueryResoure;
- (void)setStrSongType:(id)arg1;
- (id)strSongType;
- (void)setRemark:(id)arg1;
- (id)remark;
- (void)setTimeOfRadar:(long long)arg1;
- (long long)timeOfRadar;
@property(nonatomic) long long sampleSize;
@property(nonatomic) long long sampleRate;
@property(nonatomic) long long channel;

@end

