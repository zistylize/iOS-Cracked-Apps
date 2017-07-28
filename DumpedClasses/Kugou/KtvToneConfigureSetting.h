//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KtvToneConfigureSetting : NSObject
{
    int _soundEffect;
    double _voiceValue;
    int _toneValue;
    double _accompanyValue;
    int _voiceStyle;
    int _preSoundEffect;
}

@property(nonatomic) int preSoundEffect; // @synthesize preSoundEffect=_preSoundEffect;
@property(nonatomic) int voiceStyle; // @synthesize voiceStyle=_voiceStyle;
@property(nonatomic) int toneValue; // @synthesize toneValue=_toneValue;
@property(nonatomic) double accompanyValue; // @synthesize accompanyValue=_accompanyValue;
@property(nonatomic) double voiceValue; // @synthesize voiceValue=_voiceValue;
@property(nonatomic) int soundEffect; // @synthesize soundEffect=_soundEffect;
- (id)soundEffectNameWithEffectType:(int)arg1;
- (id)copy;

@end
