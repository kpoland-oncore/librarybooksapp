#import <Foundation/Foundation.h>
#import "OPAC.h"

@interface BibliothequeEtArchivesNationalesDuQuebec : OPAC <OPAC>
{
}

- (void) parseLoans1;
- (void) parseHolds1;

@end