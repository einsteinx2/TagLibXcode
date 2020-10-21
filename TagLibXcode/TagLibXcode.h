//
//  TagLibXcode.h
//  TagLibXcode
//
//  Created by Benjamin Baron on 10/17/20.
//

#import <Foundation/Foundation.h>

//! Project version number for TagLibXcode.
FOUNDATION_EXPORT double TagLibXcodeVersionNumber;

//! Project version string for TagLibXcode.
FOUNDATION_EXPORT const unsigned char TagLibXcodeVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TagLibXcode/PublicHeader.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wquoted-include-in-framework-header"
#pragma clang diagnostic ignored "-Wdocumentation"
#pragma clang diagnostic ignored "-Wdocumentation-deprecated-sync"

/* File Tags */

#import <TagLibXcode/fileref.h>
#import <TagLibXcode/tag.h>
#import <TagLibXcode/tpropertymap.h>

/* Cover Art */

// MP3
#import <TagLibXcode/mpegfile.h>
#import <TagLibXcode/id3v2tag.h>
#import <TagLibXcode/attachedpictureframe.h>
// M4A
#import <TagLibXcode/mp4file.h>
// FLAC
#import <TagLibXcode/flacfile.h>
// OGG
#import <TagLibXcode/vorbisfile.h>
// AIFF
#import <TagLibXcode/aifffile.h>
// OPUS
#import <TagLibXcode/opusfile.h>

#pragma clang diagnostic pop
