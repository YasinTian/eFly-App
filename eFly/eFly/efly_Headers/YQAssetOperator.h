//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YQAssetOperator : NSObject
{
    NSString *_plistName;
    NSString *_folderName;
}

@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
- (void).cxx_destruct;
- (id)showFileNameFromPath:(id)arg1;
- (id)readFromPlist;
- (void)writeDicToPlist:(id)arg1;
- (void)createFolder:(id)arg1;
- (_Bool)isExistFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)saveVideoPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveVideoPath:(id)arg1;
- (void)saveImagePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveImagePath:(id)arg1;
- (id)initWithFolderName:(id)arg1;

@end
