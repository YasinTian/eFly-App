//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKAOFile.h"

@class NSMutableDictionary;

@interface TuSDKInternalFilterFile : TuSDKAOFile
{
    NSMutableDictionary *_textCache;
}

@property(retain, nonatomic) NSMutableDictionary *textCache; // @synthesize textCache=_textCache;
- (void).cxx_destruct;
- (id)getTextWithName:(id)arg1;
- (void)putWithName:(id)arg1 text:(id)arg2;
- (id)initWithFile:(id)arg1;

@end

