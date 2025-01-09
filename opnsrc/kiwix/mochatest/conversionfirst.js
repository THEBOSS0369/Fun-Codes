/* eslint-disable no-undef */
import * as chai from 'chai';
import * as uiUtil from '../../../www/js/lib/uiUtil.js';
import util from '../../../www/js/lib/util.js';

import ZIMDirEntryModule from '../../../www/js/lib/zimDirEntry.js';
import ZIMArchiveModule from '../../../www/js/lib/zimArchive.js';
const { ZIMDirEntry } = ZIMDirEntryModule;
const { ZIMArchive } = ZIMArchiveModule;

const { expect } = chai;

describe('Environment Setup', () => {
    it('should verify Mocha is configured', () => {
        expect('test').to.equal('test');
    });
});

describe('Utility Functions', () => {
    // it('should read an IEEE_754 float from 4 bytes', () => {
    //     const byteArray = new Uint8Array([194, 237, 64, 0]);
    //     const float = util.readFloatFrom4Bytes(byteArray, 0);
    //     expect(float).to.equal(-118.625);
    // });
    it('should read an IEEE_754 float from 4 bytes', () => {
        const byteArray = new Uint8Array([194, 237, 64, 0]);
        const float = util.readFloatFrom4Bytes(byteArray, 0);
        expect(float).to.equal(-118.625);
    });

    it('should handle upper/lower case variations', () => {
        const testString1 = 'téléphone';
        const testString2 = 'Paris';
        expect(util.allCaseFirstLetters(testString1)).to.include('Téléphone');
        expect(util.allCaseFirstLetters(testString2)).to.include('paris');
    });

    it('should remove parameters from URLs', () => {
        const baseUrl = "A/Che cosa è l'amore?.html";
        const testUrls = [
            "A/Che%20cosa%20%C3%A8%20l'amore%3F.html?param1=toto&param2=titi",
            "A/Che%20cosa%20%C3%A8%20l'amore%3F.html?param1=toto&param2=titi#anchor",
            "A/Che%20cosa%20%C3%A8%20l'amore%3F.html#anchor"
        ];

        testUrls.forEach(testUrl => {
            expect(decodeURIComponent(uiUtil.removeUrlParameters(testUrl))).to.equal(baseUrl);
        });
    });
});

describe('ZIM Archive Initialization', () => {
    it('should set ZIM archive as ready', done => {
        const localZimArchive = new ZIMArchive([], null, zimArchive => {
            expect(zimArchive.isReady()).to.be.true;
            done();
        });
    });
});

describe('ZIM Metadata Handling', () => {
    let localZimArchive;

    beforeEach(done => {
        localZimArchive = new ZIMArchive([], null, () => {
            done();
        });
    });

    it('should read ZIM language metadata', async () => {
        const language = await localZimArchive.getMetadata('Language');
        expect(language).to.equal('eng');
    });

    it('should return undefined for missing metadata', async () => {
        const missingMetadata = await localZimArchive.getMetadata('zzz');
        expect(missingMetadata).to.be.undefined;
    });
});

describe('ZIM Directory Entry', () => {
    it('should read and parse directory entry data correctly', () => {
        const entryData = new Uint8Array([0, 0, 0, 0, 0, 0, 0, 0]);
        const entry = new ZIMDirEntry(entryData);
        expect(entry).to.be.an('object');
    });
});
